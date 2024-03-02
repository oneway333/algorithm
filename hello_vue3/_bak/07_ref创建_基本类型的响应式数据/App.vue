<template>
    <!-- 可以不用在外面再包一层了 -->
    <Person></Person>
    <!-- <Person></Person>
    <Person></Person> -->
</template>

<script lang='ts'>
import { reactive, toRefs, onBeforeMount, onMounted } from 'vue'
import Person from './components/Person.vue'

export default {
    name: 'App',
    components: {
        Person
    },
    setup() {

    },
}

</script>

<style lang="scss" scoped>
</style>
