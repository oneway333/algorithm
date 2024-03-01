<template>
  <div>
    <ul>
        <li>id: {{ id }}</li>
        <li>title: {{ title }}</li>
        <!-- <li>a: {{ a }}</li>
        <li>b: {{ b }}</li> -->
    </ul>
  </div>
</template>

<script>
export default {
    name: 'MessageContent',
    props: ['id', 'title']
}
</script>

<style>

</style>