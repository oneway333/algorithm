<template>
    <div class="person">
        <h2>sum1 == 60 || sum2 == 80, axios</h2>
        <h2>sum1 {{ sum1 }}</h2>
        <h2>sum2 {{ sum2 }}</h2>
        <button @click="sum1Add">sum1++</button>&nbsp;
        <button @click="sum2Add">sum2++</button>
    </div>
</template>

<script setup lang="ts" name="Person">
import { ref, reactive, computed, watch, watchEffect} from 'vue'

let sum1 = ref(0)
let sum2 = ref(0)

function sum1Add() {
    sum1.value += 10
}
function sum2Add() {
    sum2.value += 10
}

// watch实现
// watch([sum1, sum2], (val) => {
//     // 解构赋值
//     let [t1, t2] = val
//     if(t1 >= 60 || t2 >= 80) console.log('fuck you');   
// })

// watchEffect实现
watchEffect(()=>{
    if (sum1.value >= 60 || sum2.value >= 80) console.log('fuck you');
    
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
