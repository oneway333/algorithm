<template>
    <div class="person">
        <h1>情况二，监视【ref】定义的【对象类型】数据</h1>
        <h2>name {{ person.name }}</h2>        
        <h2>age {{ person.age }}</h2>        
        <button @click="changeName">name++</button>
        <button @click="changeAge">age++</button>
        <button @click="changePerson">person change</button>

    </div>
</template>

<script setup lang="ts" name="Person">
import { ref, reactive, computed, watch} from 'vue'
let person = ref({
    name: 'fuck',
    age: 11
})

function changeName(){
    person.value.name += '~'
}

function changeAge(){
    person.value.age++
}

function changePerson(){
    // 这是reactive的写法，不要混淆了
    // Object.assign(person, {name: 'shit', age: 321})
    person.value = {name: 'shit', age: 321}
}

// 监视 情况二，监视【ref】定义的【对象类型】数据，监视的是对象整体的地址，如果要监视内部属性，需要手动开启深度监视
// watch参数 被监视的数据、监视的回调、配置对象（deep, immediate等）
const stopWatch = watch(person, (val1, val2)=>{
    // val1和val2的值在修改内部属性时，其实都一样的
    console.log(val1, val2);        
}, {
    deep: true,
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
