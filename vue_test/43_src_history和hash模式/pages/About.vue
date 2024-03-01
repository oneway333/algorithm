<template>
  <div>
    <h2>About fuck you</h2>
  </div>
</template>

<script>
export default {
    name: 'About',
    beforeDestroy(){
      console.log('About kiled');
    },
    mounted () {
      console.log('About mounted');
    },
    // 根据路由规则，进入该组件时
    beforeRouteEnter(to, from, next){
      // console.log(to, from);
      next()
    },
    // 根据路由规则，离开该组件时
    beforeRouteLeave(to, from, next){
      // console.log(to, from);
      next()
    },
}
</script>

<style>

</style>