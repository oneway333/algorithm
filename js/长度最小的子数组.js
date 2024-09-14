// 这道题感觉是不错的，揭示了双重循环也不一定是复杂度高，最终要看的还是计算次数
// 给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，并返回其长度。如果不存在符合条件的子数组，返回 0。

// 示例：

// 输入：s = 7, nums = [2,3,1,2,4,3]
// 输出：2
// 解释：子数组 [4,3] 是该条件下的长度最小的子数组。
// 示例 2：

// 输入：target = 4, nums = [1,4,4]
// 输出：1
// 示例 3：

// 输入：target = 11, nums = [1,1,1,1,1,1,1,1]
// 输出：0

const subSeq = (s, nums) => {
  let min = 0,
    minLength = 0,
    start = 0;
  let sum = 0;
  for (let i = 0; i < nums.length; i++) {
    sum += nums[i];
    while (sum >= s) {
      minLength = i - start + 1;
      min = minLength < min ? minLength : min;
      sum -= nums[start++];
    }
  }
  console.log(minLength);
};

subSeq((s = 7), (nums = [2, 3, 1, 2, 4, 3]));
subSeq((s = 4), (nums = [1, 4, 4]));
subSeq((s = 11), (nums = [1, 1, 1, 1, 1, 1, 1, 1]));
