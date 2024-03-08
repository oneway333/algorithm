// 不就喜欢这样嘛，不就喜欢这么封装嘛
interface Person{
    name: string,
    age: number,
    hobby: (n1: number) => void
}

const per1: Person = {
    name: 'shit',
    age: 123,
    hobby: (n):void=>{console.log(n);
    }
}

function test01<T>(a1: T): T{
    let b: T = a1
    console.log(b);  
    console.log(typeof b);    
    return b
}

test01<Person>(per1)
