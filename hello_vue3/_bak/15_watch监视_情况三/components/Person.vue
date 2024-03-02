<template>
    <div class="person">
        <h1>情况三，监视【reactive】定义的【对象类型】数据</h1>
        <h2>name {{ person.name }}</h2>        
        <h2>age {{ person.age }}</h2>        
        <button @click="changeName">name++</button>
        <button @click="changeAge">age++</button>
        <button @click="changePerson">person change</button>

    </div>
</template>

<script setup lang="ts" name="Person">
import { ref, reactive, computed, watch} from 'vue'
let person = reactive({
    name: 'fuck',
    age: 11
})

function changeName(){
    person.name += '~'
}

function changeAge(){
    person.age++
}

function changePerson(){
    // reactive的方式修改对象要用Object.assign的方式
    Object.assign(person, {name: 'shit', age: 321})
}

// 监视 情况三，监视【reactive】定义的【对象类型】数据
// person是reactive定义的，默认开启了深度监控
const stopWatch = watch(person, (val1, val2)=>{
    // val1和val2的值在修改内部属性时，其实都一样的
    console.log(val1, val2);        
}, {
    // deep: true,
    // immediate: true
})


</script>

<style lang="scss" scoped>
.person {
    background-color: deepskyblue;
    box-shadow: 0 0 20px yellow;
    border-radius: 20px;
    padding: 20px;

}
</style>
