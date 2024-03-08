// 好奇怪啊  联合类型
let arr: (number | string)[] = [1, 'a', '3', '2', 'adfasdf']
// for (let i of arr) console.log(i);
arr[2] = 132;
for (let i of arr) console.log(i);

// let timer: (number | null) = null
// 单值的时候可以不要括号
let timer: number | null = null
timer = 2

// 声明数组 两种写法等价
let arr1: number[] = [1, 2, 3]
let arr2: Array<number> = [1, 2, 3]
// 联合类型
let arr3: (number | string)[] = [1, 'adf', 2, 'gfd']
let arr4: Array<number | string> = [1, 'adf', 2, 'gfd']

