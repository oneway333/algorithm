console.log("fuck that shit");

// 输入: nums = [-1,0,3,5,9,12], target = 9
// 输出: 4
// 解释: 9 出现在 nums 中并且下标为 4

// 输入: nums = [-1,0,3,5,9,12], target = 2
// 输出: -1
// 解释: 2 不存在 nums 中因此返回 -1

// 算法和代码结构的经典例题
const search = (nums, target) => {
  let left = 0;
  let right = nums.length - 1;
  // 左闭右开的形式
  let middle = parseInt((left + right) / 2); // 取整了，奇数的时候中间，正数的时候左边那个，很重要！
  // 一定要有=的情况
  while (left <= middle) {
    if (target > nums[middle]) {
      // 一定要+1，-1，不然循环不能递进
      left = middle + 1;
    } else if (target < nums[middle]) {
      right = middle - 1;
    } else {
      break;
    }
    // 一定不要忘记更新这个middle
    middle = parseInt((left + right) / 2);
  }
  if (left > right) {
    return -1;
  }
  return middle;
};

console.log(search([-1, 0, 3, 5, 9, 12], 9));
console.log(search([-1, 0, 3, 5, 9, 12], 2));
