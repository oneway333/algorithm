<template>
  <div class="app">
    <h2>我是App组件 x{{ x }}</h2>
    <h2 v-beauty="123">我是App组件 x{{ x }}</h2>
    <!-- 好像不怎么好用，哈哈 -->
    <button @click="x += 1">x++</button>
    <!-- 这个好像就是子组件使用了async await之后，仍然会有组件无法挂载的情况，所以需要加这个 -->
    <!-- 那这个不就是BUG嘛，需要用这个来处理 -->
    <!-- 那么组件内部就不能直接await来获取数据 -->
    <Suspense>
      <!-- 这两个要么一起用，要么只能用default，fallback单独用不起任何效果 -->
      <template v-slot:default>
      <!-- <template v-slot:fallback> -->
        <Child/>
      </template>
      <template v-slot:fallback>
        <h2>加载中......</h2>
      </template>
    </Suspense>
  </div>
</template>

<script setup lang="ts" name="App">
  import {Suspense} from 'vue'
  import Child from './Child.vue'
</script>

<style>
  .app {
    background-color: #ddd;
    border-radius: 10px;
    padding: 10px;
    box-shadow: 0 0 10px;
  }
</style>