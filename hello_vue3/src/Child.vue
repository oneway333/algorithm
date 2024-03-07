<template>
  <div class="child">
    <h2>我是Child组件</h2>
    <h3>当前求和为：{{ sum }}</h3>
  </div>
</template>

<script setup lang="ts">
import { nextTick, onBeforeMount, onMounted, ref } from 'vue'
import axios from 'axios'

let sum = ref(0)
// 因为是函数方式返回的，所以不管return什么，最后都是promise，只能通过.then来获取
// 不过这也就不会造成页面无法刷新的问题
// async function emo() {
//   return await axios.get('https://api.uomg.com/api/rand.qinghua?format=json')
// }

// emo().then((res)=>{
//   console.log(res.daa.tcontent);  
// })

// console.log(await axios.get('https://api.uomg.com/api/rand.qinghua?format=json'));




// let {data: {content}} = emo()
let {data:{content}} = await axios.get('https://api.uomg.com/api/rand.qinghua?format=json')
console.log(content)

// 在onMounted和onBeforeUpdate之间
nextTick(() => {
  console.log('nextTick');
})

onBeforeMount(() => {
  console.log('onBeforeMount');
})

onMounted(() => {
  console.log('onMounted');
})


</script>

<style scoped>
.child {
  background-color: skyblue;
  border-radius: 10px;
  padding: 10px;
  box-shadow: 0 0 10px;
}
</style>