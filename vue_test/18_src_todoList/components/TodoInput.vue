<template>
  <input @keyup.enter="addItem" type="text" v-model="str" />
</template>

<script>
import {nanoid} from 'nanoid'

export default {
    name: 'TodoInput',
    data () {
        return {
            str: ''
        }
    },
    methods: {
        addItem(){
            const obj = {}
            // obj.id = Math.floor(Math.random * 100000)
            obj.id = nanoid()
            obj.name = this.str
            obj.check = false
            this.$bus.$emit('addItem', obj)
            this.str = '';
        }
    },
}
</script>

<style scoped>
    input {
        height: 30px;
        width: 500px;
    }
</style>
