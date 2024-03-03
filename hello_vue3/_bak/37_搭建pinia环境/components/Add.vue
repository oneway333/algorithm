<template>
    <div class="container">
        <h2>num {{ num }}</h2>
        <select v-model.number="step">
            <option value="1">1</option>
            <option value="2">2</option>
            <option value="3">3</option>
        </select>
        <button @click="num += step">add</button>
        <button @click="num -= step">minus</button>
    </div>
</template>

<script setup lang='ts' name='Add'>
import { reactive, toRefs, onBeforeMount, onMounted, ref } from 'vue'
let num = ref(0)
let step = ref(0)

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
