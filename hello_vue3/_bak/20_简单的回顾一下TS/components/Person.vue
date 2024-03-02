<template>
    <div class="person">
    </div>
</template>

<script setup lang="ts" name="Person">
// import { type PersonInter, type Persons } from '@/types';
// 简写
import type { PersonInter, Persons } from '@/types';

// 限制数据类型
let person: PersonInter = { id: 'lkajdf01', name: 'fuck', age: 123 }

// 泛型
let personList: Persons = [
    { id: 'lkajdf01', name: 'fuck1', age: 123 },
    { id: 'lkajdf02', name: 'fuck2', age: 654 },
    { id: 'lkajdf03', name: 'fuck3', age: 789 },
]

</script>

<style lang="scss" scoped>
.person {
    background-color: deepskyblue;
    box-shadow: 0 0 20px yellow;
    border-radius: 20px;
    padding: 20px;
}
</style>
