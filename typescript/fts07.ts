// T = number 那就得理解为联合类型了
function fts07<T = number>(page: T, list: T[]){
    console.log(page);
    console.log(list);
}

fts07(1, [1, 2, 3])
fts07('a', ['a', 'b'])
fts07(true, [true, false])


