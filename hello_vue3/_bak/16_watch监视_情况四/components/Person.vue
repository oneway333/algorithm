<template>
    <div class="person">
        <h2>情况四，监视【ref】或【reactive】定义的【对象类型】数据中的某个属性</h2>
        <h3>name {{ person.name }}</h3>
        <h3>age {{ person.age }}</h3>
        <h3>{{ person.cars.c1 }} {{ person.cars.c2 }}</h3>
        <button @click="nameAdd">name++</button>
        <button @click="ageAdd">age++</button>
        <button @click="c1Add">c1++</button>
        <button @click="c2Add">c2++</button>
        <button @click="carsAdd">cars++</button>
    </div>
</template>

<script setup lang="ts" name="Person">
import { ref, reactive, computed, watch } from 'vue'

let person = reactive({
    name: 'fuck',
    age: 123,
    cars: {
        c1: 'shit',
        c2: 'damn',
    }
})

function nameAdd(){
    person.name+='~'
}

function ageAdd(){
    person.age++
}

function c1Add(){
    person.cars.c1+='~'
}

function c2Add(){
    person.cars.c2+='~'
}

function carsAdd(){
    person.cars = {c1: 'fuck1', c2: 'fuck2'}
}

// 监视整个person
// watch(person, (new_val, old_val)=>{
//     console.log(new_val, old_val);
    
// })

// 监视单个基本类型属性时，第一个参数必须是一个getter函数，即有返回值的，即返回那个要监视的属性
// 简写
// watch(()=>person.name, (new_val, old_val)=>{
// watch(()=>{ return person.name}, (new_val, old_val)=>{
//     console.log(new_val, old_val);
// })

// 监视单个对象属性时，建议写成函数式，再配合深度监视
watch(() => person.cars, (new_val, old_val)=>{
    console.log(new_val, old_val);
}, {deep: true})



</script>

<style lang="scss" scoped>
.person {
    background-color: deepskyblue;
    box-shadow: 0 0 20px yellow;
    border-radius: 20px;
    padding: 20px;

}
</style>
