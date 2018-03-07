let render = (ctx, state: Types.shot) =>
  switch state.potentialSprite {
  | Some(img) => Image.draw(ctx, img, ~x=state.x, ~y=state.y)
  | _ => ()
  };