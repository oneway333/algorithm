// 这个只是要求有这个属性，具体的对象有就行，对象的属性的实现是其自身决定的
interface ILength{length: number}

// function fts06<T extends ILength>(val: T): T{
function fts06<T>(val: Array<T>): T{
    console.log(val.length);
    return val[0]
}

console.log(fts06([1, 2, 3, 4]));
