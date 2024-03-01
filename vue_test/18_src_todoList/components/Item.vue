<template>
  <div class="item">
    <span>
        <input @click="checks" type="checkbox" :checked="item.check" /> {{ item.name }}
    </span>
    <button @click="itemDelete" >shit</button>
  </div>
</template>

<script>
export default {
  name: "Item",
  props: ["item"],
  methods: {
    checks(e){
      this.$emit('checks', {id: this.item.id, check: e.target.checked})
      // this.$emit('checks', e.target.checked)
    },
    itemDelete(){
      this.$emit('itemDelete', this.item.id)
    }
  }
};
</script>

<style scoped>
div {
  display: flex;
  justify-content: space-between;
  align-items: center;
  margin: 10px 0;
  border: 1px solid green;
  height: 40px;

  font-size: 20px;
}

div:hover{
    box-shadow: 0 0 10px yellow;

}

button{
    background-color: red;
    height: 30px;
    width: 60px;
    font-size: 20px;
    display: none;
}

/* 好神奇，现在就可以了 */
.item:hover button {
  display: inline-block;
}

input {
    margin-left: 5px;
}



</style>