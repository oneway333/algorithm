enum Direction {Up, Down, Left=4, Right}

// console.log(Direction.Up);
// console.log(Direction.Down);
// console.log(Direction.Left);
// console.log(Direction.Right);

let obj: any = {name: 'fuck'}
let n: number = 1
n = obj
// 没有报错，很诡异，强转了？
console.log(n);
console.log(typeof n);
