<template>
    <div class="container">
        <h2>num {{ numStore.num }}</h2>
        <h2>school {{ numStore.school }}</h2>
        <h2>addr {{ numStore.addr }}</h2>
        <select v-model.number="step">
            <option value="1">1</option>
            <option value="2">2</option>
            <option value="3">3</option>
        </select>
        <button @click="plus">add</button>
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

function plus(){
    // 第一种修改pinia中数据的方式，即直接修改
    // numStore.num += step.value

    // 第二种修改方式，数据多的时候
    // numStore.$patch({
    //     school: 'damn1',
    //     addr: 'damn2'
    // })

    // 第三种修改方式，配置actions动作
    numStore.increment(step.value)

}

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
