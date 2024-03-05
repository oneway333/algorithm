<template>
  <div>
    <ul>
        <li>id: {{ $route.params.id }}</li>
        <li>title: {{ $route.params.title }}</li>
    </ul>
  </div>
</template>

<script>
export default {
    name: 'MessageContent',
    
}
</script>

<style>

</style>
