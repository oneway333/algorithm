// 定义接口，限制Person对象的类型
export interface PersonInter {
    id: string,
    name: string,
    age: number,
    // x可有可无的意思
    x ?: number
}

// export type Persons = Array<PersonInter>
// 这样写也可以
export type Persons = PersonInter[]