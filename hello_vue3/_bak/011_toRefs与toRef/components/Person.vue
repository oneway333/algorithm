<template>
    <div class="person">
        <h1>name {{ name }}</h1>
        <h1>name? {{ person.name }}</h1>
        <h1>age {{ age }}</h1>
        <h1>age? {{ yearOld }}</h1>
        <h1>age?? {{ yearOld1 }}</h1>
        <button @click="nameAdd">name++</button>
        <button @click="ageAdd">age++</button>
    </div>
</template>

<script setup lang="ts" name="Person">
import {ref, reactive, toRefs, toRef} from 'vue'

let person = reactive({
    name: 'fuck',
    age: 33
})

// 解构赋值，name和age都会变成ref响应式，而且变化会引起person的数据变化
let {name, age} = toRefs(person)

// 单独的变成ref，而且变化会引起person的数据变化
let yearOld = toRef(person, 'age')
let yearOld1 = ref(person.age)  // 上下两个不是一个概念



function nameAdd(){
    name.value += '~'
}

function ageAdd(){
    age.value++
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
