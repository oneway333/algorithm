<template>
    <h2 ref="title2">fuck you</h2>
    <button @click="showH2">fuck you</button>
    <!-- 可以不用在外面再包一层了 -->
    <Person ref="people"></Person>
    <!-- <Person></Person>
    <Person></Person> -->
</template>

<script lang='ts' setup name="App">

// 这里的Person会自动return，好牛逼啊
import Person from './components/Person.vue'
import {ref} from 'vue'

let title2 = ref()
let people = ref()

function showH2(){
    // 获取不到组件上有什么有用的信息
    console.log(people.value);
}

// export default {
//     name: 'App',
//     components: {
//         Person
//     },
//     setup() {

//     },
// }

</script>

<style lang="scss" scoped>
</style>
