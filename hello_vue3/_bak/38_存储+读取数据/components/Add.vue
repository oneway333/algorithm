<template>
    <div class="container">
        <h2>num {{ numStore.num }}</h2>
        <select v-model.number="step">
            <option value="1">1</option>
            <option value="2">2</option>
            <option value="3">3</option>
        </select>
        <button @click="numStore.num += step">add</button>
        <button @click="numStore.num -= step">minus</button>
    </div>
</template>

<script setup lang='ts' name='Add'>
import { reactive, toRefs, onBeforeMount, onMounted, ref } from 'vue'
import {useAddStore} from '@/store/add'

let numStore = useAddStore()
// 都可以拿到num，但是不能直接拿来赋值，数据代理会丢
// console.log(useAddStore().num);
// console.log(useAddStore().$store.num);

let step = ref(1)

</script>

<style lang="scss" scoped>
.container{
    background-color: deepskyblue;
    margin-bottom: 20px;
    border-radius: 10px;
    padding: 20px;
    box-shadow: 0 0 10px;
}
</style>
