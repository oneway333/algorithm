<template>
    <div class="container">
    <h2>num: {{ $store.state.num }}</h2>
    <h2>num: {{ $store.getters.bigSum }}</h2>
    <!-- 这样就能确保step的数据类型 -->
    <select v-model.number="step">
      <option value="0">0</option>
      <option value="1">1</option>
      <option value="2">2</option>
      <option value="3">3</option>
    </select>
    <button @click="plus">+</button>
    <button @click="minus">-</button>
    <button @click="oddPlus">奇数+</button>
    <button @click="waitPlus">wait+</button>
    <h2>number of people {{ $store.state.personList.length }}</h2>
  </div>
</template>

<script>
export default {
    name: 'Count',
    data() {
    return {
      step: 0,
    };
  },
  methods: {
    plus(){
      this.$store.dispatch('plus', this.step)
    },
    minus(){
      this.$store.dispatch('minus', this.step)
    },
    oddPlus(){
      this.$store.commit('oddPlus', this.step)
    },
    waitPlus(){
      this.$store.dispatch('waitPlus', this.step)
      // setTimeout(()=>{this.num += this.step}, 1000)
    }
  },
}
</script>

<style>
button{
  margin-left: 10px;
}

</style>