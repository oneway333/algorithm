<template>
    <Person msg1='fuck you' :personList="personList"></Person>
</template>

<script lang='ts' setup name="App">
import Person from './components/Person.vue'
import type { Persons } from '@/types'
import { reactive } from 'vue';

// reactive传泛型
let personList = reactive<Persons>([
    { id: 'lkajdf01', name: 'fuck1', age: 123 },
    { id: 'lkajdf02', name: 'fuck2', age: 654 },
    { id: 'lkajdf03', name: 'fuck3', age: 789 },
])



</script>

<style lang="scss" scoped></style>
