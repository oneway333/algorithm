<template>
  <div>
    <!-- 用对象的形式来绑定样式，简易写法 -->
    <h3 :style="{opacity}">fuck you</h3>
    <ul>
      <li>fuck1 <input type="text" /></li>
      <li>fuck2 <input type="text" /></li>
      <li>fuck3 <input type="text" /></li>
    </ul>
  </div>
</template>

<script>
export default {
  name: "News",
  data () {
    return {
      opacity: 1
    }
  },
  // mounted(){
  //   this.timer = setInterval(()=>{
  //     console.log('fuck');
  //     this.opacity = this.opacity < 0 ? 1 : this.opacity -= 0.1
  //   }, 200)
  // },
  // beforeDestroy(){
  //   // 想在缓存的条件下销毁
  //   clearInterval(this.timer)
  // },
  // 激活和失活的生命周期
  activated () {
    this.timer = setInterval(()=>{
      console.log('fuck');
      this.opacity = this.opacity < 0 ? 1 : this.opacity -= 0.1
    }, 200)
  },
  deactivated () {
    clearInterval(this.timer)
  }
};
</script>

<style>
</style>