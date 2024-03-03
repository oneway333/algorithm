<template>
  <ul class="news-list">
    <!-- query参数 -->
    <!-- <li>{{ route.query.id }}</li>
    <li>{{ route.query.title }}</li>
    <li>{{ route.query.content }}</li> -->
    <!-- params参数 -->
    <!-- <li>{{ route.params.id }}</li>
    <li>{{ route.params.title }}</li>
    <li>{{ route.params.content }}</li> -->
    <!-- 从路由的props传来？ -->
    <li>{{ id }}</li>
    <li>{{ title }}</li>
    <li>{{ content }}</li>
  </ul>
</template>

<script setup lang="ts" name="Detail">
import { defineProps } from 'vue'
// import { useRoute } from 'vue-router';
// 竟然会自动解构赋值哦？不对，这是因为params本身就是对象了，那种写法写重复了
defineProps(['id', 'title', 'content'])

// 这是一个hooks
// const route = useRoute()
// console.log(route.query.id);

</script>

<style scoped>
.news-list {
  list-style: none;
  padding-left: 20px;
}

.news-list>li {
  line-height: 30px;
}
</style>