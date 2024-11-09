// 90.子集II

// 给定一个可能包含重复元素的整数数组 nums，返回该数组所有可能的子集（幂集）。

// 说明：解集不能包含重复的子集。

// 示例:

// 输入: [1,2,2]
// 输出: [ [2], [1], [1,2,2], [2,2], [1,2], [] ]

// 同一层有重复的时候continue
// 这个能做到的原因在于同一层输入一个栈中同一个function的for里面
// 同一层要注意不能从0开始，树的左边界其实是index了
function subCollectionII(nums) {
  const path = [];
  const res = [];

  function backtracking(index) {
    res.push([...path]);

    for (let i = index; i < nums.length; i++) {
      // 同一层，如果当前和前一个相同，就跳过
      // 但是要注意边界，一定是index，这个index是上一层传递下来的一个左边界，可以看作当前层的最左节点
      // 这里如果是写0的话，整棵树的便利好像就GG了，就不是从N叉树的左边界开始了
      if (i > index && nums[i] === nums[i - 1]) continue;
      path.push(nums[i]);
      backtracking(i + 1);
      path.pop();
    }
  }

  backtracking(0);
  console.log(res);
}

subCollectionII([1, 2, 2]);
