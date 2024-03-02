<template>
    <div class="person">
        <h2>name {{ obj.name }}, age {{ obj.age }}</h2>
        <button @click="change">change</button>
        <button @click="obj.age++">age++</button>
        <h2>{{ sum }}</h2>
        <button @click="sum++">sum++</button>
    </div>
</template>

<script setup lang="ts" name="Person">
// 解构赋值形式
import {ref, reactive} from 'vue'

// 如果obj被重新分配对象，会丢失响应式，所以对象还是尽量用const修饰把
// const obj = reactive({ name: 'fuck', age: 123})

let obj = reactive({ name: 'fuck', age: 123})
let sum = ref(0)

function change(){
    // 如果非要用let，还非要修改obj的指向，那么可以用Object.assign(),复制对象
    Object.assign(obj, {name: 'shit', age: 654})
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
