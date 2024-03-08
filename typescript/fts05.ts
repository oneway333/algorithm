// useState它接收一个任意类似的数据，返回一个数组。数组的第一个元素的类型与入参一致； 数组的第二个元素是一个函数，函数的入参类型和返回值类型与useState的入参一致

function useState<T>(n: T): [T, (a: T) => T]{
    // return [n, (n)=>{
    //     console.log(n)
    //     return n
    // }]
    const t = (p: T):T => {
        return p
      }
      return [n, t]
    
}

const arr1 = useState('123')
const arr2 = useState(123)

// console.log(arr1);
// console.log(arr2);

console.log(arr1[1]('1'));
console.log(arr2[1](2));
