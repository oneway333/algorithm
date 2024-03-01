<template>
  <div>
    <div>
      <h2>Home fuck</h2>
      <div>
        <ul class="nav nav-tabs">
          <li><router-link active-class="active" class="list-group-item" to="/home/news">News</router-link></li>
          <li><router-link active-class="active" class="list-group-item" to="/home/message">message</router-link></li>
        </ul>
        <router-view></router-view>
      </div>
    </div>

  </div>
</template>

<script>
export default {
    name: 'Home',
    beforeDestroy(){
      console.log('Home kiled');
    },
    mounted () {
      console.log('Home mounted');
    }

}
</script>

<style>

</style>