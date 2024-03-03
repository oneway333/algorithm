<template>
  <div class="home">
    <img src="http://www.atguigu.com/images/index_new/logo.png" alt="">
  </div>
</template>

<script setup lang="ts" name="Home">
import { onMounted } from 'vue';
import { useRoute, useRouter } from 'vue-router';

// 这个不能在生命周期里面声明，会拿不到router的，注意了
const router = useRouter()

onMounted(() => {
  setTimeout(() => {
    // console.log('fuck you');
    // 编程式路由跳转
    router.push({
      // path: '/news',
      name: 'news',
    })
  }, 3000)
})
</script>

<style scoped>
.home {
  display: flex;
  justify-content: center;
  align-items: center;
  height: 100%;
}
</style>