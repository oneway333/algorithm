function add1(n1: number, n2: number) {
    console.log('fuck');
    
}

function add2(n1: number, n2: number):undefined {
    console.log('fuck');
    
}

function add3(n1: number, n2: number):void {
    console.log('fuck');
    
}

// console.log(add1(1, 2)); // 返回值都是undefined
// console.log(add2(1, 2)); // 返回值都是undefined
// console.log(add3(1, 2)); // 返回值都是undefined

function test1(n:number, start?: number, end?:number): void {
    console.log('start', start, 'end', end);
    
}

// test1() // 不给就是undefined   如果有必选参数，则必须写
test1(1)
test1(1, 2)