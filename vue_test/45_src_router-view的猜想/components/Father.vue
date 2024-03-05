<template>
    <div class="container">
        <Son></Son>
        <router-view></router-view>
        
    </div>
</template>

<script>
import Son from './Son.vue'

export default {
    name: 'Father',
    components: {
        Son,
    }
}

</script>

<style scoped> 
.container{
    width: 200px;
    height: 200px;
    background-color: orange;
}
</style>
