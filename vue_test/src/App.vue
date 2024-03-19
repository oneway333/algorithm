<template>
    <div>
      <button @click="show = !show">show</button>
      <button @click="inp = inp + '-'">inp++</button>
      <hr>
      <input type="text" v-model="inp" v-show="show" v-for="i of 5" :key="i">
    </div>
</template>

<script>

export default {
    name: 'App',
    data () {
      return {
        inp: '',
        show: true
      }
    }
}

</script>

<style scoped>

</style>
