<template>
    <div class="person">
        <h1>情况一，监视【ref】定义的【基本类型数据】</h1>
        <h2>sum {{ sum }}</h2>        
        <button @click="sumAccu">sum++</button>
    </div>
</template>

<script setup lang="ts" name="Person">
import { ref, reactive, computed, watch} from 'vue'
let sum = ref(0)

function sumAccu(){
    sum.value++    
}

// 监视 情况一，监视【ref】定义的【基本类型数据】
const stopWatch = watch(sum, (new_val, old_val)=>{
    console.log(new_val, old_val);
    // 取消监视
    if(sum.value >= 10) stopWatch()
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
