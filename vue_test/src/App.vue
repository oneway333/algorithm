<template>
  <div>
    <h2>{{ fuck }}</h2>
    <!-- <button @click="gets">get</button> -->
    <Banner></Banner>
  </div>
</template>

<script>
// import axios from 'axios'
// 可以从外部传函数
// 那么vue2本质也是组合式的
// import fuck from './fuck'
import Banner from './Banner.vue'

export default {
  name: 'App',
  components: {
    Banner
  },
  data () {
    return {
      fuck: 'fuck'
    }
  },
  // methods: {
  //   gets(){
  //     // 通过127.0.0.1:5000这台服务器配置cors解决跨域，也就是增加了一个Access-Control-Allow-Origin响应头
  //     // 这样子突然就行了，......如果加了前面的，那就是默认从浏览器直接发出，而不是从代理发出？？？
  //     // 不配置任何代理，或者baseURL,那这个请求的就是当前http://localhost:8080/api/list
  //     // 如果再有代理，那么就会因为代理服务器，导致他不得不把请求发给代理服务器要请求的地址
  //     // 这样不就不能直接指定了要访问的地儿了嘛，指定了请求就不从代理走了，感觉很多东西他又不说清楚，太坑爹了
  //     // 不过确实安全了。。。。不能想请求什么就能拿到什么了。。。。。。
  //     // 其他人就不能通过IP随便访问到后台服务器了，因为跨域策略的问题
  //     // fuck(123);
  //     let that = this   // 为了不破坏this？
  //     this.$axios.get('/api/list').then((result) => {
  //       console.log(result.data);
  //       that.fuck = result.data.name
  //     }).catch((err) => {
  //       console.log(err.message);
  //     });
  //   }
  // }
}
</script>

<style>

</style>