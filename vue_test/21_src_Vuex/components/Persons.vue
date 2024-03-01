+<template>
  <div>
    <h1>fuck you</h1>
    <input type="text" v-model="name">
    <button @click="addPerson">add</button>
    <ul>
        <li v-for="p in $store.state.personList" :key="p.id">{{ p.name }}</li>
    </ul>
  </div>
</template>

<script>


export default {
    name: 'Persons',
    data () {
        return {
            name: ''
        }
    },
    methods: {
        addPerson(){
            this.$store.commit('addPerson', this.name)
            this.name=''
        }
    }
}
</script>

<style>

</style>