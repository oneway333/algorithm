<template>
  <div class="container">
    <Banner></Banner>
    <div class="row">
      <div class="col-xs-2 col-xs-offset-2">
        <div class="list-group">
          <!-- 如此神奇嘛 -->
          <!-- router-link配置导航 -->
          <!-- replace 用了就不能后退了 -->
          <router-link replace active-class="active" :to="{name:'guanyu'}" class="list-group-item"
            >About</router-link
          >
          <router-link active-class="active" to="/home" class="list-group-item"
            >Home</router-link
          >
        </div>
      </div>
      <div class="col-xs-6">
        <div class="panel">
          <div class="panel-body">
            <!-- 组件展示的位置 -->
            <router-view></router-view>
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
// import About from './components/About.vue'
// import Home from './components/Home.vue'
import Banner from './components/Banner.vue'

export default {
  name: "App",
  components: {
    // About,
    // Home,
    Banner,
  },
};
</script>

<style>
.container {
  width: 500px;
  margin: 50px auto;
  /* display: flex; */
}
</style>