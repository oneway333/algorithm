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
    }
}
</script>

<style>

</style>