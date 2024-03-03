<template>
    <div class="person">
        <h2>sum {{ sum }}</h2>
        <button @click="add">sum++</button>
    </div>
</template>

<script setup lang="ts" name="Person">

import { onBeforeMount, onBeforeUnmount, onBeforeUpdate, onMounted, onUnmounted, onUpdated, ref, nextTick, onActivated, onDeactivated } from 'vue';

let sum = ref(0)

function add(){
    sum.value++
}

// create，应该是setup就帮忙创建了？
console.log('created');

// 在onMounted和onBeforeUpdate之间
nextTick(()=>{
    console.log('nextTick'); 
})

onBeforeMount(()=>{
    console.log('onBeforeMount');
})

onMounted(()=>{
    console.log('onMounted'); 
})

onBeforeUpdate(()=>{
    console.log('onBeforeUpdate'); 
})

onUpdated(()=>{
    console.log('onUpdated'); 
})

onBeforeUnmount(()=>{
    console.log('onBeforeUnmount'); 
})

onUnmounted(()=>{
    console.log('onUnmounted'); 
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
