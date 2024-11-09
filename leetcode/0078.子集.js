// 78.子集

// 给定一组不含重复元素的整数数组 nums，返回该数组所有可能的子集（幂集）。

// 说明：解集不能包含重复的子集。

// 示例: 输入: nums = [1,2,3] 输出: [ [3],   [1],   [2],   [1,2,3],   [1,3],   [2,3],   [1,2],   [] ]

function subCollection(nums) {
  const path = [];
  const res = [];

  function backtracking(index) {
    res.push([...path]);

    for (let i = index; i < nums.length; i++) {
      path.push(nums[i]);
      backtracking(i + 1);
      path.pop();
    }
  }

  backtracking(0);
  console.log(res);
}

subCollection([1, 2, 3]);
