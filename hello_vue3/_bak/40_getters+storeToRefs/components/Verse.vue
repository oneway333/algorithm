<template>
    <div class="container">
        <button @click="oneMore">one more</button>
        <ul>
            <li v-for="v of verseList">{{ v }}</li>
        </ul>
    </div>
</template>

<script setup lang='ts' name='Verse'>
import { reactive, toRefs, onBeforeMount, onMounted, ref } from 'vue'
import {useVerseStore} from '@/store/verse'
import { storeToRefs } from 'pinia';

let verseListStore = useVerseStore()
const {verseList} = storeToRefs(verseListStore)


function oneMore(){
    // let a = Math.floor(Math.random() * 990)
    // verseListStore.verseList.unshift(lorem.slice(a, a + 100))
    verseListStore.plus()
}

</script>

<style lang="scss" scoped>
.container{
    background-color: orange;
    margin-bottom: 20px;
    border-radius: 10px;
    padding: 20px;
    box-shadow: 0 0 10px;
}
</style>
