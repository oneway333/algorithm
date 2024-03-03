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

let verseStore = useVerseStore()
const {verseList} = storeToRefs(verseStore)

// 只要verse store里面你的数据发生了变化，就会调用回调函数
// state，pinia中的所有数据
verseStore.$subscribe((mutate, state)=>{
    // 确保数据不丢失，持久化存储下来
    localStorage.setItem('verse', JSON.stringify(state.verseList))
})


function oneMore(){
    // let a = Math.floor(Math.random() * 990)
    // verseListStore.verseList.unshift(lorem.slice(a, a + 100))
    verseStore.plus()
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
