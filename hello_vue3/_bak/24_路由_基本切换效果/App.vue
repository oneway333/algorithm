<template>
    <div class="app">
        <h2 class="title">test</h2>
        <!-- 导航 -->
        <nav class="navigate">
            <RouterLink active-class="active" to="/home">Home</RouterLink>
            <RouterLink active-class="active" to="/about">About</RouterLink>
            <RouterLink active-class="active" to="/news">News</RouterLink>
        </nav>
        <!-- 展示区 -->
        <div class="content">
            <RouterView></RouterView>
        </div>
    </div>
</template>

<script lang='ts' setup name="App">
import type { RouterLink, RouterView } from 'vue-router';


</script>

<style lang="scss" scoped>
  .title {
    text-align: center;
    word-spacing: 5px;
    margin: 30px 0;
    height: 70px;
    line-height: 70px;
    background-image: linear-gradient(45deg, gray, white);
    border-radius: 10px;
    box-shadow: 0 0 2px;
    font-size: 30px;
  }
  .navigate {
    display: flex;
    justify-content: space-around;
    margin: 0 100px;
  }
  .navigate a {
    display: block;
    text-align: center;
    width: 90px;
    height: 40px;
    line-height: 40px;
    border-radius: 10px;
    background-color: gray;
    text-decoration: none;
    color: white;
    font-size: 18px;
    letter-spacing: 5px;
  }
  .navigate a.active {
    background-color: #64967E;
    color: #ffc268;
    font-weight: 900;
    text-shadow: 0 0 1px black;
    font-family: 微软雅黑;
  }
  .content {
    margin: 0 auto;
    margin-top: 30px;
    border-radius: 10px;
    width: 90%;
    height: 400px;
    border: 1px solid;
  }  
</style>
