<template>
  <ul class="news-list">
    <!-- query参数 -->
    <!-- <li>{{ route.query.id }}</li>
    <li>{{ route.query.title }}</li>
    <li>{{ route.query.content }}</li> -->
    <!-- params参数 -->
    <li>{{ route.params.id }}</li>
    <li>{{ route.params.title }}</li>
    <li>{{ route.params.content }}</li>
  </ul>
</template>

<script setup lang="ts" name="Detail">
import { useRoute } from 'vue-router';

// 这是一个hooks
const route = useRoute()
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