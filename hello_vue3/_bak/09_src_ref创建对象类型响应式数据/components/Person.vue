<template>
    <div class="person">
        <h2>name {{ obj.name }}, age {{ obj.age }}</h2>
        <button @click="change">change</button>
        <ul>
            <li v-for="a,index of arr" :key="index">{{ a }}</li>
        </ul>
        <button @click="changeName">change name?</button>
        <ul>
            <li v-for="a1,index of arr1" :key="index">{{ a1.name }} - {{ a1.alts }}</li>
        </ul>
    </div>
</template>

<script setup lang="ts" name="Person">
// 解构赋值形式
import {ref, reactive} from 'vue'

// 基本数据类型ref包裹，成为响应式
let num = 123
let str = 'fuck you'
let bol = true
let fl = 3.14
let nu = null
let undefi = undefined
let nan = NaN

// 对象类型要用reactive
// 不用响应式包裹下，数据会展示但没有联动效果
// let obj = { name: 'fuck', age: 123};
// let arr = [1, 2, 3]

// ref可以定义基本类型和对象类型，但是不管哪个类型都需要.value来获取数据
// reactive只能定义对象类型
let a = ref(1)
let obj = ref({ name: 'fuck', age: 123})
let arr = ref([1, 2, 3])
let arr1 = ref([
    {name: 'fuck1', alts: 'shit1'},
    {name: 'fuck2', alts: 'shit2'},
    {name: 'fuck3', alts: 'shit3'},
])

function change(){
    // console.log(obj, arr, a);
    
    obj.value.age += 1
    arr.value.push(obj.value.age)
}

function changeName(){
    // arr1.forEach(a => a.name='shit')
}


</script>


<style lang="scss" scoped>
.person {
    background-color: deepskyblue;
    box-shadow: 0 0 20px yellow;
    border-radius: 20px;
    padding: 20px;

}
</style>
