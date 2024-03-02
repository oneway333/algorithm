<template>
    <button @click="isShow = !isShow">is show</button>
    <Person v-if="isShow"></Person>
</template>

<script lang='ts' setup name="App">
import Person from './components/Person.vue'
import {ref} from 'vue'

let isShow = ref(true)

</script>

<style lang="scss" scoped></style>
