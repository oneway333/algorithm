// 不就喜欢这样嘛，不就喜欢这么封装嘛
interface Person{
    name: string,
    age: number,
    hobby: (n1: number) => void
}

const per: Person = {
    name: 'shit',
    age: 123,
    hobby: (n):void=>{console.log(n);
    }
}

function test00(a1: any){
    type a = typeof a1
    let b: a = a1
    console.log(b);  
    console.log(typeof b);    
}

test00(123)
test00('123')
test00(true)
test00(per)