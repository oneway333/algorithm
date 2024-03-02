<template>
    <div class="person">
        <h1>fuck</h1>
        <!-- 当id冲突的时候，指向会有问题 -->
        <h2 ref="title2">shit</h2>
        <h3 ref="title1">damn</h3>
        <button @click="showH2">show h2</button>
    </div>
</template>

<script setup lang="ts" name="Person">
import {ref, defineExpose} from 'vue'

// 创建一个title2，用于存储ref标记的内容
let title2 = ref()
// 这个会是undefined
let title1 = ref() 

let a = ref(0)
let b = ref(1)
let c = ref(2)


function showH2() {
    // console.log(document.querySelector('#title2'));
    console.log(title2.value);
    console.log(title1.value);
    
}

defineExpose({a, b, c})
</script>

<style lang="scss" scoped>
.person {
    background-color: deepskyblue;
    box-shadow: 0 0 20px yellow;
    border-radius: 20px;
    padding: 20px;
}
</style>
