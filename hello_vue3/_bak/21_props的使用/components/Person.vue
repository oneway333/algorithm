<template>
    <div class="person">
        <h2>{{ msg }}</h2>
        <ul>
            <li v-for="p of personList" :key="p.id">
                {{ p.name }}, {{ p.age }}
            </li>
        </ul>
    </div>
</template>

<script setup lang="ts" name="Person">

import { defineProps, withDefaults } from 'vue';
import type { Persons } from '@/types';

// 仅接收personList、msg，但是script中读取不到
// defineProps(['personList', 'msg'])

// 接收personList并加入类型显示，括号里面就不用再写了
// defineProps<{ personList: Persons, msg: string }>()

// 接收+限制类型+限制必要性（通过 ?: 来实现）+指定默认值
withDefaults(defineProps<{ personList: Persons, msg?: string }>(), {
    personList: ()=>[{id: '123', name: '123', age: 321}],
    msg: 'fuck shit'
})


// 接收并读取personList，返回值的名字还不能同名，什么鬼
// let props = defineProps(['personList'])
// console.log(props.personList);



</script>

<style lang="scss" scoped>
.person {
    background-color: deepskyblue;
    box-shadow: 0 0 20px yellow;
    border-radius: 20px;
    padding: 20px;
}
</style>
